//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class GKPlayer, GKTournamentParticipantInternal;

@interface GKTournamentParticipant : NSObject <NSSecureCoding>
{
    GKTournamentParticipantInternal *_internal;
    GKPlayer *_player;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(retain) GKTournamentParticipantInternal *internal; // @synthesize internal=_internal;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BOOL cheatingIndicator; // @dynamic cheatingIndicator;
@property(readonly, nonatomic) long long participantState; // @dynamic participantState;
@property(readonly, nonatomic) long long playerGroup; // @dynamic playerGroup;
@property(readonly, nonatomic) long long replayCount; // @dynamic replayCount;
@property(readonly, nonatomic) long long score; // @dynamic score;

@end

