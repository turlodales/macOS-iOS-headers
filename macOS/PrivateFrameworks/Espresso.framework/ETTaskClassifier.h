//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Espresso/ETTask.h>

@class NSArray;

@interface ETTaskClassifier : ETTask
{
    NSArray *_class_names;
}

@property NSArray *class_names; // @synthesize class_names=_class_names;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(BOOL)arg4;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;

@end

