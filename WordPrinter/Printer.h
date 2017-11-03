//
//  Printer.h
//  WordPrinter
//
//  Created by Larry Luk on 2017-11-02.
//  Copyright © 2017 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Printer;

@protocol PrinterDelegate <NSObject>

-(int)printer:(Printer *)printer numberOfTimesToPrint:(NSString *)word;


@end


@interface Printer : NSObject

@property (nonatomic, weak) id <PrinterDelegate> delegate;

@end
