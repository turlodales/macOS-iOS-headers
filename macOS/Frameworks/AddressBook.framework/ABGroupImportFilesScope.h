//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABAddressBook, ABGroup, NSArray;

@interface ABGroupImportFilesScope : NSObject
{
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABGroup *_group;
    NSArray *_filenames;
}

@property(readonly) NSArray *filenames; // @synthesize filenames=_filenames;
@property(readonly) ABGroup *group; // @synthesize group=_group;
@property(readonly) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly) ABAccount *account; // @synthesize account=_account;
- (void)dealloc;
- (id)initWithFilenames:(id)arg1;
- (id)initWithAccount:(id)arg1 addressBook:(id)arg2 group:(id)arg3 filenames:(id)arg4;

@end

