//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSView;

__attribute__((visibility("hidden")))
@interface _MKLineHeaderModel : NSObject
{
    NSMutableArray *_tokens;
    BOOL _shouldUseEmptyPlaceholder;
    NSView *_ownerView;
    NSDictionary *_fontAttribute;
    CDUnknownBlockType _colorProvider;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL shouldUseEmptyPlaceholder; // @synthesize shouldUseEmptyPlaceholder=_shouldUseEmptyPlaceholder;
@property(copy, nonatomic) CDUnknownBlockType colorProvider; // @synthesize colorProvider=_colorProvider;
@property(copy, nonatomic) NSDictionary *fontAttribute; // @synthesize fontAttribute=_fontAttribute;
@property(nonatomic) __weak NSView *ownerView; // @synthesize ownerView=_ownerView;
- (id)description;
- (id)_placeCardHeaderSeparatorString;
- (id)contentAttributedString;
- (void)removeToken:(id)arg1;
- (void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addToken:(id)arg1;
- (id)init;

@end

