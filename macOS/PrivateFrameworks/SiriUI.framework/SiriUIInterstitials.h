//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SiriUIInterstitials : NSObject
{
}

+ (id)speechSynthesizerWithLanguageIdentifier:(id)arg1 andGender:(long long)arg2;
+ (id)getLanguageCodeForVoice:(id)arg1;
+ (id)interstitialStringsForLanguageIdentifier:(id)arg1;
+ (id)interstitialCacheFolderURL;
+ (void)synthesizeInterstitialStringsForLanguageIdentifier:(id)arg1 andGender:(long long)arg2 toFolder:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)updateBridgeOSInterstitialsWithCompletion:(CDUnknownBlockType)arg1;

@end

