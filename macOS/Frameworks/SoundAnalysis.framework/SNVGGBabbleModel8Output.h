//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGBabbleModel8Output : NSObject <MLFeatureProvider>
{
    MLMultiArray *_output1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLMultiArray *output1; // @synthesize output1=_output1;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutput1:(id)arg1;

@end

