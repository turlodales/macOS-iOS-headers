//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSRecentWebSearchEntry : NSObject
{
    NSString *_searchString;
    NSDate *_date;
}

- (void).cxx_destruct;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *searchString; // @synthesize searchString=_searchString;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 date:(id)arg2;

@end

