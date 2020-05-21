//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/CalUICustomAppearancePopUpButton.h>

@class EKCalendar, EKCalendarItem, EKUIGadget, EKViewController, NSEvent, NSMutableArray;

@interface EKUICalendarPopUpButton : CalUICustomAppearancePopUpButton
{
    BOOL _showCalendarName;
    BOOL _showCalendarSwatch;
    BOOL _showButtonBorder;
    BOOL _isReadOnly;
    BOOL _populated;
    BOOL _populating;
    BOOL _repopulate;
    EKCalendarItem *_item;
    EKUIGadget *_gadget;
    NSMutableArray *_allowedItemCache;
    long long _sourceCount;
    NSEvent *_delayedEvent;
    EKViewController *_viewController;
    unsigned long long _entityType;
}

+ (id)_calendarForItem:(id)arg1;
+ (Class)cellClass;
- (void).cxx_destruct;
@property unsigned long long entityType; // @synthesize entityType=_entityType;
@property __weak EKViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) NSEvent *delayedEvent; // @synthesize delayedEvent=_delayedEvent;
@property BOOL repopulate; // @synthesize repopulate=_repopulate;
@property BOOL populating; // @synthesize populating=_populating;
@property long long sourceCount; // @synthesize sourceCount=_sourceCount;
@property(retain) NSMutableArray *allowedItemCache; // @synthesize allowedItemCache=_allowedItemCache;
@property BOOL populated; // @synthesize populated=_populated;
@property __weak EKUIGadget *gadget; // @synthesize gadget=_gadget;
@property(nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property BOOL showButtonBorder; // @synthesize showButtonBorder=_showButtonBorder;
@property BOOL showCalendarSwatch; // @synthesize showCalendarSwatch=_showCalendarSwatch;
@property BOOL showCalendarName; // @synthesize showCalendarName=_showCalendarName;
@property(nonatomic) __weak EKCalendarItem *item; // @synthesize item=_item;
- (void)updateIcon;
- (BOOL)isTruncated;
- (void)mouseDown:(id)arg1;
- (BOOL)canBecomeKeyView;
- (id)_menuItemForCalendar:(id)arg1 withCachedElement:(id)arg2;
- (void)_populatePopUpFromCache;
- (void)_populatePopUp;
- (void)reloadPopup;
- (BOOL)_calendarMatchesCurrentItemCalendar:(id)arg1;
- (void)_cacheValidCalendars;
- (void)_cacheCalendar:(id)arg1;
- (void)_cacheSource:(id)arg1 withCalendars:(id)arg2;
- (id)_calendars;
@property(readonly) EKCalendar *selectedCalendar;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

@end

