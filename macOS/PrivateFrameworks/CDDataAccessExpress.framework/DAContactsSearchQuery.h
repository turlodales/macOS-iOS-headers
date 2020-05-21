//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CDDataAccessExpress/DASearchQuery.h>

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery
{
    BOOL _includePhotos;
    BOOL _calendarInitiated;
    NSString *_searchBase;
    NSString *_searchScope;
}

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) BOOL calendarInitiated; // @synthesize calendarInitiated=_calendarInitiated;
@property(nonatomic) BOOL includePhotos; // @synthesize includePhotos=_includePhotos;
@property(copy, nonatomic) NSString *searchScope; // @synthesize searchScope=_searchScope;
@property(copy, nonatomic) NSString *searchBase; // @synthesize searchBase=_searchBase;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

@end

