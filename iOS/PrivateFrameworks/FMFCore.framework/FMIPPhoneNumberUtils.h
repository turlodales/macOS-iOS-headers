/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
 */

@interface FMIPPhoneNumberUtils : NSObject

+ (id)completeNumberForPhoneNumber:(id)arg1 formatted:(bool)arg2;
+ (id)countryCode;
+ (id)formatFullyQualifiedPhoneNumber:(id)arg1;
+ (id)formatPhoneNumber:(id)arg1;
+ (id)formattedHandle:(id)arg1;
+ (bool)handle:(id)arg1 matchesHandle:(id)arg2;
+ (bool)isEmail:(id)arg1;
+ (bool)isPhoneNumberValid:(id)arg1;
+ (bool)isPossiblyTruncatedPhoneNumberValid:(id)arg1;
+ (id)normalizedPhoneNumber:(id)arg1;
+ (id)unformatPhoneNumber:(id)arg1;
+ (bool)updateTextField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
+ (bool)updateTextView:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;

@end
