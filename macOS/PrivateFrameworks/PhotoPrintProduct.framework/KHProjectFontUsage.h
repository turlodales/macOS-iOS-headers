//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHModel.h>

@class NSString;

@interface KHProjectFontUsage : KHModel
{
    long long _projectId;
    NSString *_font;
    long long _count;
}

- (id)cloneInDatabase:(id)arg1;
- (id)clone;
- (void)setCount:(long long)arg1 force:(BOOL)arg2;
- (void)setCount:(long long)arg1;
- (void)cacheCount:(long long)arg1;
- (long long)count;
- (void)setFont:(id)arg1;
- (void)cacheFont:(id)arg1;
- (id)font;
- (void)setProjectId:(long long)arg1;
- (void)cacheProjectId:(long long)arg1;
- (long long)projectId;
- (BOOL)isProjectModel;
- (void)dealloc;

@end

