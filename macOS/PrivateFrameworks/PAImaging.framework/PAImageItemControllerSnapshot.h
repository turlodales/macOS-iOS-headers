//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGDescription, PHContentEditingInput;

@interface PAImageItemControllerSnapshot : NSObject
{
    BOOL _hideVideoComplement;
    BOOL _isExplicitVisibility;
    unsigned short _internalVideoComplementVisibility;
    DGDescription *_renderDescription;
    PHContentEditingInput *_contentEditingInput;
}

- (void).cxx_destruct;
@property BOOL isExplicitVisibility; // @synthesize isExplicitVisibility=_isExplicitVisibility;
@property unsigned short internalVideoComplementVisibility; // @synthesize internalVideoComplementVisibility=_internalVideoComplementVisibility;
@property BOOL hideVideoComplement; // @synthesize hideVideoComplement=_hideVideoComplement;
@property(retain) PHContentEditingInput *contentEditingInput; // @synthesize contentEditingInput=_contentEditingInput;
@property(retain) DGDescription *renderDescription; // @synthesize renderDescription=_renderDescription;

@end

