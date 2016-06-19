//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InputMethodKit/IMKAbstractInputMethod.h>

@class NSNumberFormatter;

@interface IMKCurrencyInputMethod : IMKAbstractInputMethod
{
    NSNumberFormatter *_currencyFormatter;
}

@property(readonly, nonatomic) NSNumberFormatter *currencyFormatter; // @synthesize currencyFormatter=_currencyFormatter;
- (void).cxx_destruct;
- (BOOL)handleKeyPress:(id)arg1 whileInKeyboardState:(id)arg2;
- (BOOL)tracksVerbatim;
- (id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2;

@end

