package IntegracionDispExt;

import static org.quartz.TriggerBuilder.*;
import static org.quartz.CronScheduleBuilder.*;
import static org.quartz.DateBuilder.*;

import org.quartz.CronTrigger;



public class Sge {
	
	public void crearJob(String nombreJob)
	{
	      CronTrigger trigger = newTrigger()
			    .withIdentity("trigger3", "group1")
			    .withSchedule(cronSchedule("0 0/2 8-17 * * ?"))
			    .forJob(nombreJob, "group1")
			    .build();
	
	}

}
