//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastServices/PODContentChangeEntityData.h>

#import <PodcastServices/PODSecureCoding-Protocol.h>

@class NSString, PODEpisode, PODShow;

@interface PODEpisodeChangeEntityData : PODContentChangeEntityData <PODSecureCoding>
{
    PODEpisode *_episode;
    PODShow *_show;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PODShow *show; // @synthesize show=_show;
@property(readonly, nonatomic) PODEpisode *episode; // @synthesize episode=_episode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithEpisode:(id)arg1 show:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

