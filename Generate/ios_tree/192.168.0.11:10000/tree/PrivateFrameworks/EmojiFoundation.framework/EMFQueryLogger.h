/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFQueryLogger : NSObject {
    const struct __EmojiLocaleDataWrapper { } * _localeData;
}

@property (nonatomic, readonly) const struct __EmojiLocaleDataWrapper { }*localeData;

+ (id)documentWeightsStringFromQueryResult:(id)arg1 usingLocaleData:(const struct __EmojiLocaleDataWrapper { }*)arg2;
+ (id)overriddenResultsStringFromQueryResult:(id)arg1 usingLocaleData:(const struct __EmojiLocaleDataWrapper { }*)arg2;

- (void)dealloc;
- (id)initWithEmojiLocaleData:(const struct __EmojiLocaleDataWrapper { }*)arg1;
- (const struct __EmojiLocaleDataWrapper { }*)localeData;
- (void)logQueryResult:(id)arg1;

@end
