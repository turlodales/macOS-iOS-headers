//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSSiteMetadataResponse.h>

@class NSImage;

@interface SnapshotResponse : WBSSiteMetadataResponse
{
    NSImage *_snapshot;
}

+ (id)responseWithURL:(id)arg1 snapshot:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *snapshot; // @synthesize snapshot=_snapshot;
- (id)initWithURL:(id)arg1 snapshot:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

