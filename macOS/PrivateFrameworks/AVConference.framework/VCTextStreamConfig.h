//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStreamConfig.h>

__attribute__((visibility("hidden")))
@interface VCTextStreamConfig : VCMediaStreamConfig
{
    unsigned char _numRedundantPayloads;
    BOOL _redEnabled;
    float _txIntervalMin;
}

@property(nonatomic) float txIntervalMin; // @synthesize txIntervalMin=_txIntervalMin;
@property(nonatomic) unsigned char numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(readonly, nonatomic, getter=isRedEnabled) BOOL redEnabled; // @synthesize redEnabled=_redEnabled;
- (BOOL)setupCodecWithClientDictionary:(id)arg1;
- (id)initWithClientDictionary:(id)arg1;

@end

