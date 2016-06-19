//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKPredicate.h>

@class NSString;

@interface EKQueryPredicate : EKPredicate
{
    BOOL _disableBackingStoreUpdate;
    NSString *_title;
    NSString *_calendarTitle;
    unsigned long long _maxResults;
    NSString *_searchTerm;
    NSString *_customQueryString;
}

+ (BOOL)string:(id)arg1 containsSubstring:(id)arg2;
+ (id)predicateWithCalendars:(id)arg1;
@property(nonatomic) BOOL disableBackingStoreUpdate; // @synthesize disableBackingStoreUpdate=_disableBackingStoreUpdate;
@property(retain, nonatomic) NSString *customQueryString; // @synthesize customQueryString=_customQueryString;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property(retain, nonatomic) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)mdQueryString;
- (unsigned long long)entityType;
- (BOOL)_includeCalendarTitleInSearchTerm;
- (id)initWithCalendars:(id)arg1;

@end

