//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFSearchResult_SpotlightExtras.h"

@class NSString;

@interface SPGroupHeadingResult : SFSearchResult_SpotlightExtras
{
    NSString *_category;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
- (void)focus:(id)arg1 result:(id)arg2;
- (id)rollOverString;
- (BOOL)supportsFocus;
- (BOOL)isGroupHeading;
- (BOOL)isSelectable;
- (id)description;
- (id)initWithDisplayName:(id)arg1 keyID:(id)arg2 focusString:(id)arg3;

@end

