//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLBatchProvider.h"

@class NSDictionary;

@interface _MLTGradientTestDataProvider : NSObject <MLBatchProvider>
{
    NSDictionary *_data;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long count;
- (id)featuresAtIndex:(long long)arg1;
- (id)initWithDataSample:(id)arg1;

@end

