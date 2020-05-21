//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHInspectorViewController.h>

@class KHCalendarDateRangePickerController, KHCalendarHolidayPickerController, KHCalendarProjectLayoutsDataSource, KHInspectorTileViewController, KHProjectSettingsPickerController;

@interface KHCalendarSettingsInspectorController : KHInspectorViewController
{
    KHProjectSettingsPickerController *_projectSettingsController;
    KHInspectorTileViewController *_timeTileController;
    KHInspectorTileViewController *_holidayTileController;
    KHInspectorTileViewController *_settingsTileController;
    KHCalendarDateRangePickerController *_timePicker;
    KHCalendarHolidayPickerController *_holidayPicker;
    KHCalendarProjectLayoutsDataSource *_dataSource;
}

- (void).cxx_destruct;
@property(retain) KHCalendarProjectLayoutsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain) KHCalendarHolidayPickerController *holidayPicker; // @synthesize holidayPicker=_holidayPicker;
@property(retain) KHCalendarDateRangePickerController *timePicker; // @synthesize timePicker=_timePicker;
@property(retain) KHInspectorTileViewController *settingsTileController; // @synthesize settingsTileController=_settingsTileController;
@property(retain) KHInspectorTileViewController *holidayTileController; // @synthesize holidayTileController=_holidayTileController;
@property(retain) KHInspectorTileViewController *timeTileController; // @synthesize timeTileController=_timeTileController;
@property(readonly, nonatomic) KHProjectSettingsPickerController *projectSettingsController; // @synthesize projectSettingsController=_projectSettingsController;
- (void)loadView;
- (struct CGSize)preferredContentSize;
- (id)initWithProjectDatasource:(id)arg1;

@end

