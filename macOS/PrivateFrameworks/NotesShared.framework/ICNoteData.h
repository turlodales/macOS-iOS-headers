//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ICNote, NSData;

@interface ICNoteData : NSManagedObject
{
    BOOL needsToBeSaved;
    BOOL settingNoteData;
}

@property(nonatomic, getter=isSettingNoteData) BOOL settingNoteData; // @synthesize settingNoteData;
@property BOOL needsToBeSaved; // @synthesize needsToBeSaved;
- (void)willAccessValueForKey:(id)arg1;
- (void)saveNoteDataIfNeeded;
- (void)willSave;

// Remaining properties
@property(retain, nonatomic) NSData *cryptoInitializationVector; // @dynamic cryptoInitializationVector;
@property(retain, nonatomic) NSData *cryptoTag; // @dynamic cryptoTag;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) ICNote *note; // @dynamic note;
@property(readonly, nonatomic) NSData *primitiveData; // @dynamic primitiveData;

@end

