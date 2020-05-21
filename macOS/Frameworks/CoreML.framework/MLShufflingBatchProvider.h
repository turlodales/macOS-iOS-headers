//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLBatchProvider.h"

@interface MLShufflingBatchProvider : NSObject <MLBatchProvider>
{
    struct vector<long, std::__1::allocator<long>> indices;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomNumberGenerator;
    id <MLBatchProvider> _batchProvider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) id <MLBatchProvider> batchProvider; // @synthesize batchProvider=_batchProvider;
- (id)featuresAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (void)shuffle;
- (id)initWithBatchProvider:(id)arg1 seed:(id)arg2;

@end

