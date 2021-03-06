//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class ABGroupActionScope, ABGroupBrowsingContext, ABGroupDragScope, ABGroupDropScope, ABGroupImportFilesScope, ABGroupSearchingContext, ABSmartGroup, NSString;
@protocol ABGroupActionHelper, ABGroupCutHelper, ABGroupDeleteHelper, ABGroupDragHelper, ABGroupDropHelper, ABGroupRenameHelper, ABGroupSelectHelper;

@protocol ABGroupHelperFactory <NSObject>
- (id <ABGroupActionHelper>)makeImportFilesHelper:(ABGroupImportFilesScope *)arg1 showImportConfirmation:(BOOL)arg2;
- (id <ABGroupActionHelper>)makeEditSmartGroupHelper:(ABSmartGroup *)arg1;
- (id <ABGroupActionHelper>)makeCreateSmartGroupFromSearchHelper;
- (id <ABGroupActionHelper>)makeCreateSmartGroupHelper;
- (id <ABGroupSelectHelper>)makeSectionSelectHelperWithIdentifier:(NSString *)arg1;
- (id <ABGroupSelectHelper>)makeSearchingSelectHelper:(ABGroupSearchingContext *)arg1;
- (id <ABGroupSelectHelper>)makeBrowsingSelectHelper:(ABGroupBrowsingContext *)arg1;
- (id <ABGroupDragHelper>)makeDragHelper:(ABGroupDragScope *)arg1;
- (id <ABGroupDropHelper>)makeDropHelper:(ABGroupDropScope *)arg1;
- (id <ABGroupDeleteHelper>)makeDeleteHelper:(ABGroupActionScope *)arg1;
- (id <ABGroupRenameHelper>)makeRenameHelper:(ABGroupActionScope *)arg1;
- (id <ABGroupActionHelper>)makeCreateHelper:(ABGroupActionScope *)arg1;
- (id <ABGroupActionHelper>)makePasteHelper:(ABGroupActionScope *)arg1;
- (id <ABGroupCutHelper>)makeCutHelper:(ABGroupActionScope *)arg1;
- (id <ABGroupActionHelper>)makeCopyHelper:(ABGroupActionScope *)arg1;
@end

