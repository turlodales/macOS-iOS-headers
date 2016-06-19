//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPersonListSearchController, CNContactListController, CNContactPickerView;

@interface CNContactPickerScope : NSObject
{
    CNContactPickerView *_pickerView;
    CNContactListController *_contactListController;
    ABPersonListSearchController *_searchController;
    id <CNContactPickerInternalResponseDelegate> _delegate;
}

@property(readonly) __weak id <CNContactPickerInternalResponseDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak ABPersonListSearchController *searchController; // @synthesize searchController=_searchController;
@property(readonly) __weak CNContactListController *contactListController; // @synthesize contactListController=_contactListController;
@property(readonly) __weak CNContactPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (id)initWithInternalResponseDelegate:(id)arg1 contactListController:(id)arg2 searchController:(id)arg3 pickerView:(id)arg4;

@end

