//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_canBePublished;
    CoreDAVItemWithNoChildren *_canBeShared;
    CoreDAVItemWithNoChildren *_isMarkedUndeletable;
    CoreDAVItemWithNoChildren *_isMarkedImmutableSharees;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees; // @synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable; // @synthesize isMarkedUndeletable=_isMarkedUndeletable;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *canBeShared; // @synthesize canBeShared=_canBeShared;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *canBePublished; // @synthesize canBePublished=_canBePublished;
- (id)copyParseRules;
- (id)init;

@end

