
#import <Foundation/Foundation.h>

#import "CRCloudStorageProtocol.h"




@interface CRGoogleDrive : NSObject <CRCloudStorageProtocol>
-(instancetype)initWithClientId:(NSString *)clientId clientSecret: (NSString *)clientSecret;
-(instancetype)initWithClientId:(NSString *)clientID clientSecret:(NSString *)clientSecret redirectUri:(NSString *)redirectUri state:(NSString *)state;
@end
