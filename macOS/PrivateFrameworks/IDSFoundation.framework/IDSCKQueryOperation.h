//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKQueryOperation : IDSCKDatabaseOperation
{
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _completionBlock;
}

+ (id)alloc;
+ (Class)__class;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;

@end

