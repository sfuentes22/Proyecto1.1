#include "Parqueo.h"


int main() {
	int opc, par, man, pla, numCampo;
	float ton;
	string mar, col, nom, ced;
	Vehiculo* chofPtr;
	
	

	do {
		//system("COLOR 1");
		cout << endl;
		cout << "                 ----------------MALL MULTIPLAZA ESCAZU----------------" << endl;
		cout << "                     Telefono: 2222-2222" << endl;
		cout << "                     Direccion Fisica: Escazu, San Jose, Costa Rica" << endl;
		cout << "                 ------------------------------------------------------" << endl << endl;

		cout << "Cuantos parqueos desea habilitar: ";
		cin >> par;
		cout << "Cuantos campos estaran en mantenimiento: ";
		cin >> man;

		Parqueo* PA = new Parqueo(par);
		InfoDelCampo* VE = new InfoDelCampo();

		Vehiculo* vePtr1 = new Vehiculo("Mercedes", 5342210127, 4, "rojo", NULL);
		Vehiculo* vePtr2 = new Vehiculo("Mercedes", 53427, 4, "azul", NULL);
		Vehiculo* vePtr3 = new Vehiculo("Mercedes", 5888127, 4, "negro", NULL);
		Vehiculo* vePtr4 = new Vehiculo("Mercedes", 0127, 4, "verde", NULL);

		VE->ingresarVehiculo(vePtr1);
		VE->ingresarVehiculo(vePtr2);
		VE->ingresarVehiculo(vePtr3);
		VE->ingresarVehiculo(vePtr4);


		cout << endl << endl<< "----------------------------------------MENU-------------------------------------------" << endl;
		cout << "1 - Ver TODOS los campos del parqueo" << endl;
		cout << "2 - Ver solo los campos que están OCUPADOS. (solo lugar, estado y placa) " << endl;
		cout << "3 - Ver solo los campos que están en MANTENIMIENTO. (solo lugar y estado)" << endl;
		cout << "4 - Ingresar un vehículo al parqueo. Solicitar posición o lugar. " << endl;
		cout << "5 - Cancelar la estancia en el lugar. Realizar el debido cobro del alquiler." << endl;
		cout << "6 - Ver solo los campos que están LIBRES. (solo lugar y estado) " << endl;
		cout << "7 - Saber la cantidad de vehículos que existen en el parqueo. " << endl;
		cout << "8 - Saber la cantidad de campos libres en el parqueo. " << endl;
		cout << "9 - Saber la cantidad de campos ocupados en el parqueo. " << endl;
		cout << "10 - Saber la cantidad de campos en mantenimiento en el parqueo." << endl;
		cout << "11 - Saber la cantidad de vehículos que han ingresado en el día. " << endl;
		cout << "12 - Saber la cantidad de dinero que ha ingresado al parqueo este día. " << endl;
		cout << "13 - Saber la cantidad de dinero que ha ingresado, por un solo campo. " << endl;
		cout << "14 - Saber le tonelaje de los vehículos que hacen más uso del parqueo." << endl;
		cout << "15 - Saber el porcentaje de ocupación que tiene el parqueo. " << endl;
		cout << "16 - Mostrar la información de los vehículos que han estado en un determinado campo. " << endl;
		cout << "17 - Mostar la información de todos (que estén o no) los vehículos del parqueo." << endl;
		cout << "18 - Mostrar los vehículos que se encuentran en el rango de tonelaje de 1.0 a 1.5" << endl;
		cout << "19 - Salir." << endl;
		cout << "---------------------------------------------------------------------------------------" << endl << endl;
		cout << "Ingrese la opcion que desee realizar: ";
		cin >> opc;
		system("cls");
		cout << endl << endl;
		switch (opc){
		case 1: {
			cout << "1 - Ver TODOS los campos del parqueo" << endl;
			cout << VE->verVehiculo(53427);
			
			break;
		}
		case 2: {
			cout << "2 - Ver solo los campos que están OCUPADOS. (solo lugar, estado y placa) " << endl;


			break;
		}
		case 3: {
			cout << "3 - Ver solo los campos que están en MANTENIMIENTO. (solo lugar y estado)" << endl;


			break;
		}
		case 4: {
			cout << "4 - Ingresar un vehículo al parqueo. Solicitar posición o lugar. " << endl;
			cout << "--DATOS DEL VEHICULO--" << endl;
			cout << "Marca del vehiculo: ";
			cin >> mar;
			cout << endl <<"Placa del vehiculo: ";
			cin >> pla;
			cout << endl << "Tonelaje del vehiculo: ";
			cin >> ton;
			cout << endl << "Color del vehiculo: ";
			cin >> col;
			cout << "--DATOS DEL CHOFER--" << endl;
			cout << "Nombre del chofer: ";
			cin >> nom;
			cout << endl << "Cedula: ";
			cin >> ced;


			Chofer* chofPtr = new Chofer(nom, ced);
			Vehiculo* vePtr5 = new Vehiculo(mar, pla, ton, col, chofPtr);
			if (VE->ingresarVehiculo(vePtr5))
				cout << "Vehiculo ingresado" << endl;
				cout << "Ingrese el numero del campo para el vehiculo: ";
				cin >> numCampo;
				cout << endl << VE->verVehiculo(pla);




			break;
		}
		case 5: {
			cout << "5 - Cancelar la estancia en el lugar. Realizar el debido cobro del alquiler." << endl;


			break;
		}
		case 6: {
			cout << "6 - Ver solo los campos que están LIBRES. (solo lugar y estado) " << endl;


			break;
		}
		case 7: {
			cout << "7 - Saber la cantidad de vehículos que existen en el parqueo. " << endl;


			break;
		}
		case 8: {
			cout << "8 - Saber la cantidad de campos libres en el parqueo. " << endl;

			break;
		}
		case 9: {
			cout << "9 - Saber la cantidad de campos ocupados en el parqueo. " << endl;


			break;
		}
		case 10: {
			cout << "10 - Saber la cantidad de campos en mantenimiento en el parqueo." << endl;


			break;
		}
		case 11: {
			cout << "11 - Saber la cantidad de vehículos que han ingresado en el día. " << endl;

			break;
		}
		case 12: {
			cout << "12 - Saber la cantidad de dinero que ha ingresado al parqueo este día. " << endl;

			
			break;
		}
		case 13: {
			cout << "13 - Saber la cantidad de dinero que ha ingresado, por un solo campo. " << endl;

			
			break;
		}
		case 14: {
			cout << "14 - Saber le tonelaje de los vehículos que hacen más uso del parqueo." << endl;

			break;
		}
		case 15: {
			cout << "15 - Saber el porcentaje de ocupación que tiene el parqueo. " << endl;

			
			break;
		}
		case 16: {
			cout << "16 - Mostrar la información de los vehículos que han estado en un determinado campo. " << endl;

			
			break;
		}
		case 17: {
			cout << "17 - Mostar la información de todos (que estén o no) los vehículos del parqueo." << endl;

			break;
		}
		case 18: {
			cout << "18 - Mostrar los vehículos que se encuentran en el rango de tonelaje de 1.0 a 1.5" << endl;

			
			break;
		}
		case 19: {
			cout << endl << "Muchas gracias" << endl;
			
			break;
		}
		};


	} while (opc != 19);


	system("pause");
	return 0;
}