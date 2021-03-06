//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MBClipsLoader : NSObject
{
    BOOL _loading;
    BOOL _showOnlyFavorites;
    NSMutableArray *_clips;
    NSArray *_previousClips;
}

- (void).cxx_destruct;
@property(retain) NSArray *previousClips; // @synthesize previousClips=_previousClips;
@property(retain) NSMutableArray *clips; // @synthesize clips=_clips;
@property(nonatomic) BOOL showOnlyFavorites; // @synthesize showOnlyFavorites=_showOnlyFavorites;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
- (void)load;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithShowOnlyFavorites:(BOOL)arg1;

@end

