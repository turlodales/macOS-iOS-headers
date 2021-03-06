//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearField/NFSession.h>

@interface NFSeshatSession : NFSession
{
}

+ (BOOL)isTransientError:(CDStruct_c0454aff)arg1;
- (CDStruct_c0454aff)obliterate;
- (CDStruct_c0454aff)upgradeKey:(unsigned char)arg1 inputData:(id)arg2 outWriteCount:(unsigned int *)arg3;
- (CDStruct_c0454aff)getHash:(id *)arg1;
- (CDStruct_c0454aff)getData:(id *)arg1 updateKUD:(char *)arg2 outWriteLimit:(unsigned int *)arg3 outWriteCount:(unsigned int *)arg4;
- (CDStruct_c0454aff)deleteSlot:(unsigned char)arg1 outWriteCount:(unsigned int *)arg2;
- (CDStruct_c0454aff)authorizeUpdate:(BOOL)arg1 slotIndex:(unsigned char)arg2 userToken:(id)arg3 outWriteCount:(unsigned int *)arg4;
- (CDStruct_c0454aff)resetCounter:(unsigned char)arg1 userToken:(id)arg2 outWriteCount:(unsigned int *)arg3;
- (CDStruct_c0454aff)derive:(unsigned char)arg1 userHash:(id)arg2 outData:(id *)arg3 outWriteCount:(unsigned int *)arg4;
- (CDStruct_c0454aff)allocateSlot:(unsigned char)arg1 authorizingUser:(unsigned char)arg2 authorizingUserToken:(id)arg3 outToken:(id *)arg4 outWriteCount:(unsigned int *)arg5;

@end

