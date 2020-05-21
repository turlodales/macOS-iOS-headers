//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class GKCustomTournamentRequestInternal, GKPlayer, GKTournamentDefinition, NSDate, NSString;

@interface GKCustomTournamentRequest : NSObject <NSSecureCoding>
{
    GKCustomTournamentRequestInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) GKCustomTournamentRequestInternal *internal; // @synthesize internal=_internal;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)createTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) GKTournamentDefinition *tournamentDefinition;
@property(readonly, nonatomic) GKPlayer *tournamentCreator;
- (id)initWithTournamentDefinition:(id)arg1 andCreator:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) double duration; // @dynamic duration;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) BOOL isCreatorInTournament; // @dynamic isCreatorInTournament;
@property(nonatomic) long long maxPlayers; // @dynamic maxPlayers;
@property(nonatomic) long long maxReplays; // @dynamic maxReplays;
@property(nonatomic) long long minPlayers; // @dynamic minPlayers;
@property(nonatomic) long long scoringMethod; // @dynamic scoringMethod;
@property(nonatomic) long long seedingMethod; // @dynamic seedingMethod;
@property(retain, nonatomic) NSDate *startTime; // @dynamic startTime;
@property(retain, nonatomic) NSString *tournamentName; // @dynamic tournamentName;

@end

