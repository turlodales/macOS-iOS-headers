//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject
{
    NSMutableDictionary *_assetsByInputModeLevel;
    NSString *_inputMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (id)assetContentItemsMatching:(id)arg1;
- (void)removeAllInputModeLevels;
- (void)addAssetsForInputModeLevel:(id)arg1;
- (id)recursiveDescription;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;

@end

