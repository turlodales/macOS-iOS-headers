/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSharedAppletSubcredentialsManifestItem : NSObject {
    long long  _entitlement;
    bool  _forWatch;
    NSString * _groupIdentifier;
    NSString * _identifier;
    NSString * _name;
    long long  _rawState;
    long long  _state;
}

@property (nonatomic, readonly) long long entitlement;
@property (getter=isForWatch, nonatomic, readonly) bool forWatch;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long rawState;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)description;
- (long long)entitlement;
- (id)groupIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isForWatch;
- (id)name;
- (long long)rawState;
- (long long)state;

@end
