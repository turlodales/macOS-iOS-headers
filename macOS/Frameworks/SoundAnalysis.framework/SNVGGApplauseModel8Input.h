//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGApplauseModel8Input : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1;

@end

