//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface CNFetchResult : NSObject
{
    id _value;
    NSData *_currentHistoryToken;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *currentHistoryToken; // @synthesize currentHistoryToken=_currentHistoryToken;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (id)description;
- (id)initWithValue:(id)arg1 currentHistoryToken:(id)arg2;

@end

