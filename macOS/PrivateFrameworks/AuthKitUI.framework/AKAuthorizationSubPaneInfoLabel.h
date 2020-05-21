//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class NSString, NSTextField;

@interface AKAuthorizationSubPaneInfoLabel : AKAuthorizationSubPane
{
    double _marginInset;
    NSTextField *_infoLabel;
    unsigned long long _internalInfoLabelType;
}

- (void).cxx_destruct;
@property unsigned long long internalInfoLabelType; // @synthesize internalInfoLabelType=_internalInfoLabelType;
@property(readonly) NSTextField *infoLabel; // @synthesize infoLabel=_infoLabel;
@property double marginInset; // @synthesize marginInset=_marginInset;
@property unsigned long long infoLabelType;
- (id)titleFont;
- (id)messageFont;
- (void)setLabel:(id)arg1 toInfoLabelType:(unsigned long long)arg2;
- (id)infoLabelWithString:(id)arg1;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
@property(copy) NSString *string;
- (id)initWithString:(id)arg1;

@end

