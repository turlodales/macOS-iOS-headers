//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"

@class MLMultiArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CIFeatureProviderMultiArray : NSObject <MLFeatureProvider>
{
    MLMultiArray *multiArray;
    NSString *name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) MLMultiArray *multiArray; // @synthesize multiArray;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithName:(id)arg1 array:(id)arg2;

@end

