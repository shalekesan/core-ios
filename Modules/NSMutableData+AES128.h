/*
 * NSMutableData Category Header
 *  This is a category for NSMutableData in order to provide in-place encryption
 *  capabilities
 *
 * 
 * Created by Alfredo 'revenge' Pesoli on 08/04/2009
 * Copyright (C) HT srl 2009. All rights reserved
 *
 */

//#import <Cocoa/Cocoa.h>
#import <CommonCrypto/CommonCryptor.h>


@interface NSMutableData (AES128) 

- (int)encryptWithKeyUsingPKCS7Padding: (NSData *)aKey;
- (CCCryptorStatus)__encryptWithKey: (NSData *)aKey;
- (CCCryptorStatus)encryptWithKey: (NSData *)aKey;
- (CCCryptorStatus)decryptWithKey: (NSData *)aKey;
- (NSMutableData*)encryptPKCS7:(NSData*)aKey;
- (void)removePadding;

@end