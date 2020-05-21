//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ETDataProvider.h"

@class NSArray, NSString;

@interface PHADataset : NSObject <ETDataProvider>
{
    NSArray *_labeledDataSamples;
    NSString *_inputName;
    NSString *_labelName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(readonly, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
@property(readonly, nonatomic) NSArray *labeledDataSamples; // @synthesize labeledDataSamples=_labeledDataSamples;
- (unsigned long long)numberOfDataPoints;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithLabeledFeatureVectors:(id)arg1 inputName:(id)arg2 labelName:(id)arg3;

@end

