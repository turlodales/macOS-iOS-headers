/* Generated by RuntimeBrowser.
 */

@protocol AMSBagConsumer <NSObject>

@required

+ (AMSBagKeySet *)bagKeySet;
+ (NSString *)bagSubProfile;
+ (NSString *)bagSubProfileVersion;

@optional

+ (AMSBag *)createBagForSubProfile;

@end
