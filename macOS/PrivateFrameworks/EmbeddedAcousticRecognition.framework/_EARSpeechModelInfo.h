//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface _EARSpeechModelInfo : NSObject
{
    struct SpeechModelInfo _speechModelInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *acousticProfileVersion;
@property(readonly, nonatomic) NSString *phoneSetVersion;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSSet *tasks;
@property(readonly, nonatomic) NSSet *samplingRates;
@property(readonly, nonatomic) NSString *version;
- (id)initWithConfig:(id)arg1;

@end

