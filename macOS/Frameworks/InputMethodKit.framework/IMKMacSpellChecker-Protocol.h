//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol IMKMacSpellChecker
- (NSString *)_addQuotationTo:(NSString *)arg1;
- (void)_preflightTextCheckingForTypes:(unsigned long long)arg1;
- (void)_preflightChosenSpellServer;
- (long long)_requestCheckingAndCandidatesForSelectedRange:(struct _NSRange)arg1 inString:(NSString *)arg2 types:(unsigned long long)arg3 keyboardLanguage:(NSString *)arg4 bundleIdentifier:(NSString *)arg5 processID:(int)arg6 options:(NSDictionary *)arg7 inSpellDocumentWithTag:(long long)arg8 completionHandler:(void (^)(long long, NSArray *))arg9;
@end

