/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMediaSharedProperties : NSObject {
    AMSURLSession * _session;
    <AMSMediaTokenServiceProtocol> * _tokenService;
}

@property (nonatomic, readonly) AMSURLSession *session;
@property (nonatomic, readonly) <AMSMediaTokenServiceProtocol> *tokenService;

+ (id)_propertiesForClientIdentifier:(id)arg1 bag:(id)arg2 URLKnownToBeTrusted:(bool)arg3;
+ (id)accessQueue;
+ (id)propertiesForMarketingItemTask:(id)arg1;
+ (id)propertiesForMediaTask:(id)arg1;
+ (id)propertiesForRatingsTask:(id)arg1;
+ (id)propertiesForStorefrontsTask:(id)arg1;
+ (id)sharedPropertiesMapTable;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1 bag:(id)arg2 URLKnownToBeTrusted:(bool)arg3;
- (void)dealloc;
- (id)session;
- (id)tokenService;

@end
