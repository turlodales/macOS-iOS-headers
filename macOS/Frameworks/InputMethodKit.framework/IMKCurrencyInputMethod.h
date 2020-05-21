//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InputMethodKit/IMKAbstractInputMethod.h>

@interface IMKCurrencyInputMethod : IMKAbstractInputMethod
{
    struct __CFNumberFormatter *_currencyFormatter;
}

+ (id)inputMethodVerbatimChainWithAttachedKeyboard:(id)arg1 currencyFormatter:(struct __CFNumberFormatter *)arg2;
+ (id)inputMethodVerbatimChainWithCurrencyFormatter:(struct __CFNumberFormatter *)arg1;
@property(readonly, nonatomic) struct __CFNumberFormatter *currencyFormatter; // @synthesize currencyFormatter=_currencyFormatter;
- (BOOL)handleKeyPress:(id)arg1 whileInKeyboardState:(id)arg2;
- (BOOL)tracksVerbatim;
- (void)dealloc;
- (id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2 currencyFormatter:(struct __CFNumberFormatter *)arg3;
- (id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2;

@end

