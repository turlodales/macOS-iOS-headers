//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/_AMSystemEventsItem.h>

@class _AMSystemEventsScreenCorner, _AMSystemEventsShortcut, _AMSystemEventsSpacesPreferencesObject;

@interface _AMSystemEventsExposePreferencesObject : _AMSystemEventsItem
{
}

@property(readonly, copy) _AMSystemEventsScreenCorner *topRightScreenCorner;
@property(readonly, copy) _AMSystemEventsScreenCorner *topLeftScreenCorner;
@property(readonly, copy) _AMSystemEventsSpacesPreferencesObject *spacesPreferences;
@property(readonly, copy) _AMSystemEventsShortcut *showSpacesShortcut;
@property(readonly, copy) _AMSystemEventsShortcut *showDesktopShortcut;
@property(readonly, copy) _AMSystemEventsShortcut *dashboardShortcut;
@property(readonly, copy) _AMSystemEventsScreenCorner *bottomRightScreenCorner;
@property(readonly, copy) _AMSystemEventsScreenCorner *bottomLeftScreenCorner;
@property(readonly, copy) _AMSystemEventsShortcut *applicationWindowsShortcut;
@property(readonly, copy) _AMSystemEventsShortcut *allWindowsShortcut;

@end

