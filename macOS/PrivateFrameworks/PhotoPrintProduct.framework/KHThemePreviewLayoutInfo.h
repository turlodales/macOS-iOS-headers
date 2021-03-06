//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoPrintProduct/KHThemePreviewInfoProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface KHThemePreviewLayoutInfo : NSObject <KHThemePreviewInfoProtocol>
{
    NSMutableArray *_textFrames;
    double _drawScale;
    struct CGRect _drawRect;
}

+ (id)infoKey;
- (void).cxx_destruct;
@property(nonatomic) double drawScale; // @synthesize drawScale=_drawScale;
@property(nonatomic) struct CGRect drawRect; // @synthesize drawRect=_drawRect;
@property(retain, nonatomic) NSMutableArray *textFrames; // @synthesize textFrames=_textFrames;
- (id)initFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

