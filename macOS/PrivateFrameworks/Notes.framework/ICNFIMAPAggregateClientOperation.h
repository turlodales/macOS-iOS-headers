//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFIMAPClientOperation.h>

@class NSArray;

@interface ICNFIMAPAggregateClientOperation : ICNFIMAPClientOperation
{
    NSArray *_operations;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *operations; // @synthesize operations=_operations;
- (void)cleanupAfterCompletion;
- (void)setGateway:(id)arg1;
- (long long)composition;
- (id)init;
- (id)initWithOperations:(id)arg1;

@end

