/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKOverlayAppConfiguration : SKOverlayConfiguration

@property (nonatomic, readonly, retain) ASOOverlayAppConfiguration *_backing;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *campaignToken;
@property (nonatomic) long long position;
@property (nonatomic, retain) NSString *providerToken;
@property (nonatomic) bool userDismissible;

- (id)_init;
- (id)additionalValueForKey:(id)arg1;
- (id)appIdentifier;
- (id)campaignToken;
- (id)initWithAppIdentifier:(id)arg1 position:(long long)arg2;
- (id)initWithBacking:(id)arg1;
- (long long)position;
- (id)providerToken;
- (void)setAdditionalValue:(id)arg1 forKey:(id)arg2;
- (void)setAppIdentifier:(id)arg1;
- (void)setCampaignToken:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setProviderToken:(id)arg1;
- (void)setUserDismissible:(bool)arg1;
- (bool)userDismissible;

@end
