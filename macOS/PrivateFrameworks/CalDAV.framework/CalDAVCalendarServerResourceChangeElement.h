//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVItemWithHrefChildItem.h"

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem
{
    CalDAVUpdateOwnerItem *_changedBy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CalDAVUpdateOwnerItem *changedBy; // @synthesize changedBy=_changedBy;
- (id)copyParseRules;
@property(readonly, nonatomic) NSURL *fullHrefURL;
- (id)init;

@end

