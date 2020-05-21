//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class NSDictionary, NSString, PGMeaningfulEventLocationMobilityTrait, PGMeaningfulEventLocationSetTrait, PGMeaningfulEventNumberTrait, PGMeaningfulEventPartOfDayTrait, PGMeaningfulEventSceneSetTrait, PGMeaningfulEventSetTrait;

@interface PGMeaningfulEventRequiredCriteria : PGMeaningfulEventCriteria
{
    BOOL _mustBeInteresting;
    NSString *_identifier;
    double _minimumScore;
    CDUnknownBlockType _completion;
    NSDictionary *_additionalInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) BOOL mustBeInteresting; // @synthesize mustBeInteresting=_mustBeInteresting;
@property(readonly, nonatomic) double minimumScore; // @synthesize minimumScore=_minimumScore;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) NSString *meaningNodeLabel;
- (id)initWithIdentifier:(id)arg1 minimumScore:(double)arg2;

// Remaining properties
@property(retain, nonatomic) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait; // @dynamic allPartsOfDayTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *datesTrait; // @dynamic datesTrait;
@property(retain, nonatomic) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait; // @dynamic locationMobilityTrait;
@property(retain, nonatomic) PGMeaningfulEventLocationSetTrait *locationsTrait; // @dynamic locationsTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *maximumDurationTrait; // @dynamic maximumDurationTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *minimumDurationTrait; // @dynamic minimumDurationTrait;
@property(retain, nonatomic) PGMeaningfulEventNumberTrait *numberOfPeopleTrait; // @dynamic numberOfPeopleTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *peopleTrait; // @dynamic peopleTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *poisTrait; // @dynamic poisTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *publicEventCategoriesTrait; // @dynamic publicEventCategoriesTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *roisTrait; // @dynamic roisTrait;
@property(retain, nonatomic) PGMeaningfulEventSceneSetTrait *scenesTrait; // @dynamic scenesTrait;
@property(retain, nonatomic) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait; // @dynamic significantPartsOfDayTrait;
@property(retain, nonatomic) PGMeaningfulEventSetTrait *socialGroupsTrait; // @dynamic socialGroupsTrait;

@end

