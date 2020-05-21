//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class KHCalendarProjectLayoutsDataSource, KHHolidayStore, NSArray, NSButton, NSMutableArray, NSPopUpButton, NSScrollView, NSString, NSTableView, NSTextField;

@interface KHCalendarHolidayPickerController : UXViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    NSButton *_birthdaysOptionButton;
    NSTextField *_holidaysLabel;
    NSPopUpButton *_holidaysMenuButton;
    NSTextField *_showCalendarsLabel;
    NSScrollView *_holidayTableContainer;
    NSTableView *_holidayTableView;
    NSArray *_calendars;
    NSMutableArray *_enabledCalendarUUIDs;
    KHCalendarProjectLayoutsDataSource *_dataSource;
    KHHolidayStore *_holidayStore;
}

- (void).cxx_destruct;
@property(retain) KHHolidayStore *holidayStore; // @synthesize holidayStore=_holidayStore;
@property __weak KHCalendarProjectLayoutsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain) NSMutableArray *enabledCalendarUUIDs; // @synthesize enabledCalendarUUIDs=_enabledCalendarUUIDs;
@property(copy) NSArray *calendars; // @synthesize calendars=_calendars;
@property(retain) NSTableView *holidayTableView; // @synthesize holidayTableView=_holidayTableView;
@property(retain) NSScrollView *holidayTableContainer; // @synthesize holidayTableContainer=_holidayTableContainer;
@property(retain) NSTextField *showCalendarsLabel; // @synthesize showCalendarsLabel=_showCalendarsLabel;
@property(retain) NSPopUpButton *holidaysMenuButton; // @synthesize holidaysMenuButton=_holidaysMenuButton;
@property(retain) NSTextField *holidaysLabel; // @synthesize holidaysLabel=_holidaysLabel;
@property(retain) NSButton *birthdaysOptionButton; // @synthesize birthdaysOptionButton=_birthdaysOptionButton;
- (void)_warmupCalendarEvents;
- (void)refreshCalendarLayouts;
- (void)calendarTableItemAction:(id)arg1;
- (void)holidayCountryChangedAction:(id)arg1;
- (void)toggleBirthdays:(id)arg1;
- (BOOL)cacheContainsCalendar:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_setupHolidaysMenu;
- (void)loadView;
- (id)initWithProjectDatasource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

